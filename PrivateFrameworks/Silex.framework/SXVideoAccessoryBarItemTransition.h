/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAccessoryBarItemTransition : NSObject {
    SXVideoAccessoryBarItemTransitionContext * _context;
    <SXVideoAccessoryItem> * _fromItem;
    <SXVideoAccessoryItem> * _toItem;
    <SXVideoAccessoryItemTransitioning> * _transitionCoordinator;
}

@property (nonatomic, retain) SXVideoAccessoryBarItemTransitionContext *context;
@property (nonatomic, readonly) <SXVideoAccessoryItem> *fromItem;
@property (nonatomic, readonly) <SXVideoAccessoryItem> *toItem;
@property (nonatomic, readonly) <SXVideoAccessoryItemTransitioning> *transitionCoordinator;

- (void).cxx_destruct;
- (void)cancel;
- (id)context;
- (id)fromItem;
- (id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setContext:(id)arg1;
- (id)toItem;
- (id)transitionCoordinator;

@end