package Image;

import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FilenameFilter;
import java.io.IOException;
import javax.imageio.ImageIO;

public class Image {

    // File representing the folder that you select using a FileChooser
    static final File dir = new File("E:\\Siam\\CSE\\Codes\\00codes\\0078823927_code\\7.2.14\\reduct\\Software reduced");
    static final String path = new String("E:\\Siam\\CSE\\Codes\\00codes\\0078823927_code\\7.2.14\\reduct\\Software reduced\\");

    // array of supported extensions (use a List if you prefer)
    static final String[] EXTENSIONS = new String[]{
        "gif", "png", "jpg","PNG","JPG","JPEG","jpeg","bmp" // and other formats you need
    };
    // filter to identify images based on their extensions
    static final FilenameFilter IMAGE_FILTER = new FilenameFilter() {

        @Override
        public boolean accept(final File dir, final String name) {
            for (final String ext : EXTENSIONS) {
                if (name.endsWith("." + ext)) {
                    return (true);
                }
            }
            return (false);
        }
    };

    public static void main(String[] args) {

        if (dir.isDirectory()) { // make sure it's a directory
            System.out.println("Processing..........");
            int total_image =0;
            for (final File f : dir.listFiles(IMAGE_FILTER)) {
                BufferedImage img = null;
                

                try {
                    img = ImageIO.read(f);
                    total_image++;
                    // you probably want something more involved here
                    // to display in your UI
                    String name = f.getName();
                    String Onlyname = name;
                    String ext = null;
                    if(total_image%50 == 0) System.out.println("Processed .. "+total_image);
                    //System.out.println("image: " + name);
                    //System.out.println(" size  : " + f.length());

                    int pos = name.lastIndexOf(".");
                    if (pos > 0) {
                        Onlyname = Onlyname.substring(0, pos);
                        //System.out.println("only name: " + Onlyname);
                        ext = name.substring(pos + 1, name.length());
                    }
                    //File  newfile = new File("E:\\path\\"+Onlyname+"-min."+ext);

                    File  newfile = new File(path+Onlyname+"-min."+ext);
                    f.renameTo(newfile);

                } catch (final IOException e) {
                    // handle errors here
                }
            }
            System.out.println("Total images: " + total_image);
        }
        else System.out.println("No directory........ ");
    }
}
