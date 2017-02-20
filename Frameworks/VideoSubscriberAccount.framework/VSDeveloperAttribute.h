/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperAttribute : NSObject {
    int  _autocorrectionType;
    NSString * _displayName;
    NSString * _keyPath;
    int  _keyboardType;
    NSString * _placeholder;
    int  _spellCheckingType;
    NSValueTransformer * _valueTransformer;
}

@property (nonatomic) int autocorrectionType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) int spellCheckingType;
@property (nonatomic, retain) NSValueTransformer *valueTransformer;

+ (id)standardAttributes;

- (void).cxx_destruct;
- (int)autocorrectionType;
- (id)displayName;
- (id)init;
- (id)keyPath;
- (int)keyboardType;
- (id)placeholder;
- (void)setAutocorrectionType:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSpellCheckingType:(int)arg1;
- (void)setValueTransformer:(id)arg1;
- (int)spellCheckingType;
- (id)valueTransformer;

@end