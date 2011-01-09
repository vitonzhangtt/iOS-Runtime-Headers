/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray;



@interface UIImagePickerController : UINavigationController <NSCoding>
{
    NSUInteger _sourceType;
    id _image;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    NSInteger _previousStatusBarMode;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int savingOptions : 3; 
        unsigned int didRevertStatusBar : 1; 
    } _imagePickerFlags;
}

@property NSUInteger sourceType;
@property(copy) NSArray *mediaTypes;
@property BOOL allowsEditing;
@property BOOL allowsImageEditing;
@property double videoMaximumDuration;
@property NSUInteger videoQuality;
@property BOOL showsCameraControls;
@property(retain) UIView *cameraOverlayView;
@property CGAffineTransform cameraViewTransform;
@property NSUInteger cameraCaptureMode;
@property NSUInteger cameraDevice;
@property NSInteger cameraFlashMode;
@property <UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;

+ (BOOL)isSourceTypeAvailable:(NSUInteger)arg1;
+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(NSUInteger)arg2;
+ (id)availableMediaTypesForSourceType:(NSUInteger)arg1;
+ (BOOL)isCameraDeviceAvailable:(NSUInteger)arg1;
+ (id)availableCaptureModesForCameraDevice:(NSUInteger)arg1;
+ (BOOL)isFlashAvailableForCameraDevice:(NSUInteger)arg1;
+ (void)_initializeSafeCategory;

- (id)_initWithSourceImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_updateCameraCaptureMode;
- (void)setSourceType:(NSUInteger)arg1;
- (NSUInteger)sourceType;
- (void)setMediaTypes:(id)arg1;
- (id)mediaTypes;
- (BOOL)allowsImageEditing;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (double)videoMaximumDuration;
- (void)setVideoMaximumDuration:(double)arg1;
- (NSUInteger)videoQuality;
- (void)setVideoQuality:(NSUInteger)arg1;
- (void)_setAllowsImageEditing:(BOOL)arg1;
- (BOOL)_allowsImageEditing;
- (void)_setProperties:(id)arg1;
- (void)_initializeProperties;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_valueForProperty:(id)arg1;
- (void)_setImagePickerSavingOptions:(NSUInteger)arg1;
- (NSUInteger)_imagePickerSavingOptions;
- (BOOL)_sourceTypeIsCamera;
- (id)_cameraViewController;
- (BOOL)showsCameraControls;
- (void)setShowsCameraControls:(BOOL)arg1;
- (id)cameraOverlayView;
- (void)setCameraOverlayView:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })cameraViewTransform;
- (void)setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)takePicture;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (NSUInteger)cameraDevice;
- (void)setCameraDevice:(NSUInteger)arg1;
- (NSUInteger)cameraCaptureMode;
- (BOOL)_isCameraCaptureModeValid:(NSUInteger)arg1;
- (void)setCameraCaptureMode:(NSUInteger)arg1;
- (NSInteger)cameraFlashMode;
- (void)setCameraFlashMode:(NSInteger)arg1;
- (BOOL)_didRevertStatusBar;
- (void)_removeAllChildren;
- (id)_createInitialController;
- (void)_setupControllersForCurrentSourceType;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_autoDismiss;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (id)_properties;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)ckCanDismissWhenSuspending;

@end