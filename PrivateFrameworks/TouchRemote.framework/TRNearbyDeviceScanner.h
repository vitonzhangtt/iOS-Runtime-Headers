/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyDeviceScanner : NSObject {
    <TRNearbyDeviceScannerDelegate> * _delegate;
    SFDeviceDiscovery * _deviceDiscovery;
    unsigned int  _requestedService;
    NSObject<OS_dispatch_queue> * _scannerQ;
    unsigned int  _state;
}

@property <TRNearbyDeviceScannerDelegate> *delegate;
@property (nonatomic, retain) SFDeviceDiscovery *deviceDiscovery;
@property unsigned int requestedService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scannerQ;
@property (nonatomic) unsigned int state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_deviceChanged:(id)arg1;
- (void)_deviceFound:(id)arg1;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (id)delegate;
- (id)deviceDiscovery;
- (id)init;
- (void)openSession:(id)arg1 withCompletion:(id /* block */)arg2;
- (unsigned int)requestedService;
- (id)scannerQ;
- (void)setDelegate:(id)arg1;
- (void)setDeviceDiscovery:(id)arg1;
- (void)setRequestedService:(unsigned int)arg1;
- (void)setScannerQ:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)startScanningForDevicesWithService:(unsigned int)arg1;
- (unsigned int)state;
- (void)stopScanning;

@end