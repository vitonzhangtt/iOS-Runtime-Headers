/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, CALayer, NSMutableArray, UIViewController;



@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding>
{
    CALayer *_layer;
    id _tapInfo;
    id _gestureInfo;
    NSMutableArray *_gestureRecognizers;
    NSArray *_subviewCache;
    float _charge;
    NSInteger _tag;
    UIViewController *_viewDelegate;
    struct { 
        unsigned int userInteractionDisabled : 1; 
        unsigned int implementsDrawRect : 1; 
        unsigned int implementsDidScroll : 1; 
        unsigned int implementsMouseTracking : 1; 
        unsigned int hasBackgroundColor : 1; 
        unsigned int isOpaque : 1; 
        unsigned int becomeFirstResponderWhenCapable : 1; 
        unsigned int interceptMouseEvent : 1; 
        unsigned int deallocating : 1; 
        unsigned int debugFlash : 1; 
        unsigned int debugSkippedSetNeedsDisplay : 1; 
        unsigned int debugScheduledDisplayIsRequired : 1; 
        unsigned int isInAWindow : 1; 
        unsigned int isAncestorOfFirstResponder : 1; 
        unsigned int dontAutoresizeSubviews : 1; 
        unsigned int autoresizeMask : 6; 
        unsigned int patternBackground : 1; 
        unsigned int fixedBackgroundPattern : 1; 
        unsigned int dontAnimate : 1; 
        unsigned int superLayerIsView : 1; 
        unsigned int layerKitPatternDrawing : 1; 
        unsigned int multipleTouchEnabled : 1; 
        unsigned int exclusiveTouch : 1; 
        unsigned int hasViewController : 1; 
        unsigned int needsDidAppearOrDisappear : 1; 
        unsigned int gesturesEnabled : 1; 
        unsigned int deliversTouchesForGesturesToSuperview : 1; 
        unsigned int chargeEnabled : 1; 
        unsigned int skipsSubviewEnumeration : 1; 
        unsigned int needsDisplayOnBoundsChange : 1; 
        unsigned int hasTiledLayer : 1; 
        unsigned int hasLargeContent : 1; 
        unsigned int alwaysScaleContent : 1; 
    } _viewFlags;
}

@property CGPoint integralCenter;
@property float x;
@property float y;
@property float width;
@property float height;
@property CGPoint viewFrameOrigin;
@property BOOL skipsSubviewEnumeration;
@property(getter=_viewDelegate) UIViewController *viewDelegate; /* unknown property attribute: S_setViewDelegate: */
@property BOOL gesturesEnabled;
@property BOOL deliversTouchesForGesturesToSuperview;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(retain,readonly) CALayer *layer;
@property NSInteger tag;

+ (Class)layerClass;
+ (id)_topMostView:(id)arg1;
+ (void)throttledFlush;
+ (void)commitAnimations;
+ (BOOL)_isInAnimationBlock;
+ (void)_setAnimationAttributes:(id)arg1;
+ (float)_currentAnimationDuration;
+ (void)setAnimationPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (void)disableAnimation;
+ (void)enableAnimation;
+ (void)_inheritAnimationParameters;
+ (BOOL)areAnimationsEnabled;
+ (void)_performWithoutAnimation:(id)arg1;
+ (void)setAnimationFrameInterval:(double)arg1;
+ (void)setAnimationStartDate:(id)arg1;
+ (void)setAnimationStartTime:(double)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
+ (void)setAnimationAutoreverses:(BOOL)arg1;
+ (void)setAnimationFromCurrentState:(BOOL)arg1;
+ (void)setAnimationRoundsToInteger:(BOOL)arg1;
+ (void)setAnimationTransition:(NSInteger)arg1 forView:(id)arg2 cache:(BOOL)arg3;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)_setAnimationFilter:(NSInteger)arg1 forView:(id)arg2;
+ (void)_setAnimationFilterValue:(float)arg1;
+ (void)_setupAnimationWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(NSUInteger)arg4 animations:(id)arg5 start:(id)arg6 completion:(id)arg7;
+ (void)_animateWithDuration:(double)arg1 delay:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 start:(id)arg5 completion:(id)arg6;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 completion:(id)arg5;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2;
+ (void)transitionWithView:(id)arg1 duration:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 completion:(id)arg5;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(NSUInteger)arg4 completion:(id)arg5;
+ (void)setAnimationTransition:(NSInteger)arg1 forView:(id)arg2;
+ (void)_setInvalidatesViewUponCreation:(BOOL)arg1;
+ (BOOL)_invalidatesViewUponCreation;
+ (void)_beginDisablingPromoteDescendantToFirstResponder;
+ (void)_endDisablingPromoteDescendantToFirstResponder;
+ (id)_tintColorForStyle:(NSInteger)arg1;
+ (void)setAnimationsEnabled:(BOOL)arg1;
+ (void)setAnimationCurve:(NSInteger)arg1;
+ (void)setAnimationDelay:(double)arg1;
+ (void)beginAnimations:(id)arg1 context:(void*)arg2;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)arg1 startingAtFirstResponder:(id)arg2;
+ (void)flush;
+ (void)beginAnimations:(id)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)arg1;
+ (void)endAnimations;
+ (id)_accessibilityTitleForSystemTag:(NSInteger)arg1;
+ (id)_mapkit_viewNamed:(id)arg1;

- (NSInteger)_depthFirstCompare:(id)arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (NSInteger)compareTextEffectsOrdering:(id)arg1;
- (id)_syntheticTouch;
- (id)_syntheticUIEventWithGSEvent:(struct __GSEvent { }*)arg1 touchPhase:(NSInteger)arg2;
- (void)reduceWidth:(float)arg1;
- (NSInteger)textEffectsVisibilityLevelWhenKey;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (NSInteger)textEffectsVisibilityLevel;
- (id)textInputView;
- (void)_startGesture:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_stopGesture:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_gestureChanged:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (struct CGPoint { float x1; float x2; })_scrollPointForPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 constrain:(BOOL)arg3 snapToEdge:(BOOL)arg4;
- (void)zoomToScale:(float)arg1;
- (void)_setGestureInfoZoomScale:(float)arg1;
- (void)_zoomToScale:(float)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_zoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2 animate:(BOOL)arg3 constrainScrollPoint:(BOOL)arg4;
- (void)_rubberbandZoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2;
- (BOOL)_isRubberBanding;
- (void)_setZoomAnimationProgress:(id)arg1;
- (float)_internalScaleForScale:(float)arg1;
- (float)_scaleForInternalScale:(float)arg1;
- (float)_minimumZoomScaleDelta;
- (float)_rubberBandScaleForScale:(float)arg1;
- (BOOL)_zoomWithEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_canStartZoomFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_startZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)_stopZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)rotateToDegrees:(float)arg1;
- (void)_rotateToDegrees:(float)arg1 duration:(float)arg2 event:(struct __GSEvent { }*)arg3;
- (void)_setRotationAnimationProgress:(id)arg1;
- (BOOL)_canStartRotationFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_startRotationFromEvent:(struct __GSEvent { }*)arg1;
- (void)_rotateFromEvent:(struct __GSEvent { }*)arg1;
- (void)_stopRotationFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)canHandleGestures;
- (id)gestureDelegate;
- (id)valueForGestureAttribute:(NSInteger)arg1;
- (void)setRotationDegrees:(float)arg1 duration:(double)arg2;
- (void)_setZoomScale:(float)arg1 duration:(double)arg2;
- (void)_resetZoomingWithEvent:(struct __GSEvent { }*)arg1;
- (struct CGSize { float x1; float x2; })_scrollerContentSize;
- (struct CGPoint { float x1; float x2; })_constrainedScrollPoint:(struct CGPoint { float x1; float x2; })arg1 contentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_zoomToScrollPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 event:(struct __GSEvent { }*)arg4;
- (void)_zoomToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 constrainScrollPoint:(BOOL)arg4 event:(struct __GSEvent { }*)arg5;
- (void)_animateToScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_animateZoomFailureToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3;
- (float)_zoomAnimationProgress;
- (float)rotationDegrees;
- (NSInteger)enabledGestures;
- (id)_window;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)animator:(id)arg1 startAnimation:(id)arg2;
- (BOOL)endEditing:(BOOL)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setValue:(id)arg1 forGestureAttribute:(NSInteger)arg2;
- (float)_zoomScale;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (NSInteger)stateForGestureType:(NSInteger)arg1;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (void)_gestureEnded:(struct __GSEvent { }*)arg1;
- (void)_createLayerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCharge:(float)arg1;
- (void)_setChargeEnabled:(BOOL)arg1;
- (void)setTapDelegate:(id)arg1;
- (id)tapDelegate;
- (NSInteger)_topToBottomLeftToRightViewCompare:(id)arg1;
- (id)_nextKeyResponder;
- (id)_previousKeyResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)startHeartbeat:(SEL)arg1 inRunLoopMode:(id)arg2;
- (void)stopHeartbeat:(SEL)arg1;
- (NSInteger)swipe:(NSInteger)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setBackgroundCGColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)_backgroundCGColor;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (NSInteger)tag;
- (void)setTag:(NSInteger)arg1;
- (id)_gestureInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extent;
- (void)setMultipleTouchEnabled:(BOOL)arg1;
- (void)setExclusiveTouch:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forFields:(NSInteger)arg2;
- (void)setRotationBy:(float)arg1;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (BOOL)autoresizesSubviews;
- (NSUInteger)autoresizingMask;
- (void)sizeToFit;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })position;
- (struct CGPoint { float x1; float x2; })origin;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)_removeFirstResponderFromSubtree;
- (void)insertSubview:(id)arg1 atIndex:(NSInteger)arg2;
- (void)exchangeSubviewAtIndex:(NSInteger)arg1 withSubviewAtIndex:(NSInteger)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_movedToFront;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)_didRemoveSubview:(id)arg1;
- (BOOL)_doesViewControllerExistForAncestorOfView:(id)arg1;
- (void)_setBackgroundColor:(id)arg1;
- (id)_backgroundColor;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (id)_findFirstSubviewWantingToBecomeFirstResponder;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 copySublayers:(BOOL)arg4;
- (void)deferredBecomeFirstResponder;
- (void)_promoteDescendantToFirstResponderIfNecessary;
- (void)_postMovedFromSuperview:(id)arg1;
- (void)movedFromSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)movedFromWindow:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (id)viewWithTag:(NSInteger)arg1;
- (void)layoutIfNeeded;
- (void)layoutBelowIfNeeded;
- (id)_viewIndexPath;
- (void)_setViewDelegate:(id)arg1;
- (id)_viewDelegate;
- (void)setContentMode:(NSInteger)arg1;
- (NSInteger)contentMode;
- (void)setContentStretch:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretch;
- (void)_setAlwaysScaleContent:(BOOL)arg1;
- (float)contentScaleFactor;
- (void)setContentScaleFactor:(float)arg1;
- (void)_setShouldRasterize:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)needsDisplay;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setClipsToBounds:(BOOL)arg1;
- (BOOL)clipsToBounds;
- (void)setFixedBackgroundPattern:(BOOL)arg1;
- (void)setClearsContextBeforeDrawing:(BOOL)arg1;
- (BOOL)clearsContextBeforeDrawing;
- (BOOL)isHiddenOrHasHiddenAncestor;
- (void)setClearsContext:(BOOL)arg1;
- (void)setContentsPosition:(NSInteger)arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)forceDisplayIfNeeded;
- (void)recursivelyForceDisplayIfNeeded;
- (void)_enableLayerKitPatternDrawing:(BOOL)arg1;
- (void*)_createIOSurfaceWithPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_clearAnimationFilters;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)_removeAllAnimations:(BOOL)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setClipsSubviews:(BOOL)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_subclassImplementsDrawRect;
- (id)_scroller;
- (void)_didScroll;
- (void)_invalidateSubviewCache;
- (void)_invalidateLayerContents;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (id)_interceptEvent:(id)arg1;
- (BOOL)_canDrawContent;
- (void)_updateNeedsDisplayOnBoundsChange;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)_animationIsPaused;
- (BOOL)_isInAWindow;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (BOOL)_isRootForKeyResponderCycle;
- (id)_rootForKeyResponderCycle;
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;
- (void)_collectKeyViews:(id)arg1;
- (void)_setContentImage:(id)arg1;
- (void)_setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_renderSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)skipsSubviewEnumeration;
- (void)setSkipsSubviewEnumeration:(BOOL)arg1;
- (void)_addSubview:(id)arg1 positioned:(NSInteger)arg2 relativeTo:(id)arg3;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (BOOL)_isAncestorOfFirstResponder;
- (id)_containingScrollView;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)arg1;
- (id)_gestureRecognizers;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (void)setGestureRecognizers:(id)arg1;
- (BOOL)gesturesEnabled;
- (void)setGesturesEnabled:(BOOL)arg1;
- (BOOL)deliversTouchesForGesturesToSuperview;
- (void)setDeliversTouchesForGesturesToSuperview:(BOOL)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)removeAllGestureRecognizers;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)_layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)_autoresizingDescription;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(NSInteger)arg2;
- (id)recursiveDescription;
- (id)_scriptingInfo;
- (NSInteger)_containerStyle;
- (NSInteger)_style;
- (BOOL)useBlockyMagnificationInClassic;
- (id)_enclosingScrollerIncludingSelf;
- (id)_enclosingScrollableScrollerIncludingSelf;
- (BOOL)_isScrollingEnabled;
- (id)subviews;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)scriptingInfoWithChildren;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_isChargeEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)_alwaysHandleInteractionEvents;
- (void)_mouseDown:(struct __GSEvent { }*)arg1;
- (void)_mouseDragged:(struct __GSEvent { }*)arg1;
- (void)_mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent { }*)arg1;
- (BOOL)isUserInteractionEnabled;
- (BOOL)isDescendantOfView:(id)arg1;
- (id)layer;
- (id)_layer;
- (struct CGPoint { float x1; float x2; })frameOrigin;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })center;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)backgroundColor;
- (BOOL)isOpaque;
- (BOOL)cancelTouchTracking;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (BOOL)_cancelTapDelegateTracking;
- (BOOL)cancelMouseTracking;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)nextResponder;
- (id)gestureRecognizers;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_usesDifferentHitTestForGestures;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)charge;
- (BOOL)isMultipleTouchEnabled;
- (BOOL)isExclusiveTouch;
- (id)init;
- (void)setOpaque:(BOOL)arg1;
- (void)setAutoresizingMask:(NSUInteger)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGSize { float x1; float x2; })size;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)containsView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isEnabled;
- (id)superview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (id)window;
- (float)alpha;
- (BOOL)isHidden;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (BOOL)ignoresMouseEvents;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canHandleSwipes;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToWindow;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)_navBarCompareGeometry:(id)arg1;
- (unsigned long long)_accessibilityTextAreaTraits;
- (id)_accessibilitySecureTextForString:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (BOOL)_accessibilityObscuresScreen;
- (BOOL)accessibilityTreeHidden;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityChildrenInDirection:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (void)_accessibilityFinalize;
- (void)_accessibilityPostNotification:(id)arg1;
- (id)_axSubviews;
- (id)_accessibleSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityFrameForView:(id)arg1;
- (struct CGSize { float x1; float x2; })_mainScreenSizeForCurrentOrientation;
- (BOOL)_accessibilityShouldHitTestLayers;
- (BOOL)_accessibilityViewIsActive;
- (BOOL)accessibilityIsWindow;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (id)_accessibilityElementsInContainerIncludingContainers:(BOOL)arg1 topLevel:(id)arg2;
- (id)_accessibilityChildVendingParent;
- (id)_accessibilityElementsInDirection:(BOOL)arg1 withCount:(unsigned long)arg2 originalElement:(id)arg3;
- (void)_appendWindowsForAccessibilityElements:(id)arg1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (void)_axPrintSubviews:(NSInteger)arg1 string:(id)arg2;
- (id)_accessibilityRetrieveIvarText;
- (id)__accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityRetrieveLabelFromTableViewCell;
- (id)_accessibilityElementsInContainerIncludingContainers:(BOOL)arg1;
- (id)_accessibilityAccessibleElementsInView:(id)arg1;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsBackNavButton;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (BOOL)_accessibilityUserTestingIsTypeOfButton:(id)arg1;
- (id)abIndexPathOfSubview:(id)arg1;
- (id)abSubviewAtIndexPath:(id)arg1;
- (id)abFontForProperty:(id)arg1 variety:(id)arg2;
- (id)abFontForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (id)abColorForProperty:(id)arg1 variety:(id)arg2;
- (id)abColorForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (float)abFloatForProperty:(id)arg1 variety:(id)arg2;
- (float)abFloatForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (struct CGSize { float x1; float x2; })abSizeForProperty:(id)arg1 variety:(id)arg2;
- (struct CGSize { float x1; float x2; })abSizeForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (id)firstLabelSubview;
- (id)_mapKit_mapView;
- (NSUInteger)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_doubleFrame;
- (id)_mapkit_currentLayer;
- (void)setHeight:(float)arg1;
- (void)setViewFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })viewFrameOrigin;
- (void)_shiftFrameXOriginBy:(float)arg1;
- (float)height;
- (void)setY:(float)arg1;
- (void)setX:(float)arg1;
- (float)y;
- (float)x;
- (float)width;
- (void)setWidth:(float)arg1;
- (id)findSubviewWithClass:(Class)arg1;
- (void)_setForwardedByExpandableView:(BOOL)arg1;
- (void)setIntegralCenter:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })integralCenter;
- (void)fadeToAlpha:(float)arg1 withDuration:(float)arg2;
- (void)centerSubviewInBounds:(id)arg1;
- (id)superviewOfClass:(Class)arg1;
- (id)_firstDescendantOfKind:(Class)arg1;
- (id)firstScrollViewDescendant;

@end