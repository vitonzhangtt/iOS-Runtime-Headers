/* Generated by RuntimeBrowser.
 */

@protocol SiriUIViewController <NSObject>

@required

- (AceObject *)aceObject;
- (void)setAceObject:(AceObject *)arg1;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)wasAddedToTranscript;

@optional

- (float)desiredHeight;
- (float)desiredHeightForWidth:(float)arg1;
- (void)didEndDisplayingView;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (NSString *)navigationTitle;
- (void)willBeginDisplayingView;

@end