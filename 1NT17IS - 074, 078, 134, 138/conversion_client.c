   h/��;
�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ate (host, CONVERSION_PROG, CONVERSION_VER, "udp");
  
 if (clnt == NULL) {
 clnt_pcreateerror (host);
 exit (1);
 }

 printf("%d square is: %d\n", n, conversion(host,n,clnt));
 clnt_destroy (clnt);
  
exit (0);
}
