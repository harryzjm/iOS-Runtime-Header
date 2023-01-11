//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject
{
    NSTextContentManager *_textContentManager;
    NSTextRange *_elementRange;
}

@property(retain) NSTextRange *elementRange; // @synthesize elementRange=_elementRange;
@property __weak NSTextContentManager *textContentManager; // @dynamic textContentManager;
- (void)dealloc;
- (id)init;
- (id)initWithTextContentManager:(id)arg1;

@end
