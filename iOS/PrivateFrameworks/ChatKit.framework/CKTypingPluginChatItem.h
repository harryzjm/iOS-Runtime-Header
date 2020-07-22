//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface CKTypingPluginChatItem
{
    NSString *_plugInBundleID;
    NSData *_typingIndicatorData;
}

@property(readonly, nonatomic) NSData *typingIndicatorData; // @synthesize typingIndicatorData=_typingIndicatorData;
@property(copy, nonatomic) NSString *plugInBundleID; // @synthesize plugInBundleID=_plugInBundleID;
- (void).cxx_destruct;
- (id)indicatorLayer;
- (id)iconImage;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;

@end
