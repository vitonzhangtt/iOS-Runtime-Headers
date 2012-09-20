/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSString;

@interface MecabraFacemarkCandidate : NSObject  {
    NSString *_string;
    NSString *_category;
}

@property(readonly) NSString * string;
@property(readonly) NSString * category;

+ (id)copyFacemarkCandidatesForLocale:(id)arg1;

- (id)string;
- (void)dealloc;
- (id)category;
- (id)initWithString:(id)arg1 category:(id)arg2;

@end