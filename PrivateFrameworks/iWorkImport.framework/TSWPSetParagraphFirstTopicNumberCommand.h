/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSetParagraphFirstTopicNumberCommand : TSWPTextCommand {
    unsigned int _firstTopicNumber;
}

- (id)actionString;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 topicNumber:(unsigned int)arg3;
- (int)persistenceKind;

@end