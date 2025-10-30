public class test2 {
        public static void main(String[] args)
        {
            int[] ar={10,3,11,11,2,4};
            int j=0;
            for(int i=1;i<ar.length;i++)
            {
                if(ar[j]>ar[i])
                {
                j=i;
                }
            }
            System.out.println("Smallest Value: "+ar[j]);
        }
}
