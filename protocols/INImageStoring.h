/* Generated by RuntimeBrowser.
 */

@protocol INImageStoring <INImageServing>

@required

- (bool)canStoreImage:(INImage *)arg1;
- (void)purgeImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retrieveImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INImage *, NSError *, void*
- (void)storeImage:(void *)arg1 scaled:(void *)arg2 qualityOfService:(void *)arg3 storeType:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: INImage *, bool, unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@optional

- (INImage *)retrieveImageSynchronouslyForIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSString *)storeImageSynchronously:(INImage *)arg1 error:(id*)arg2;

@end