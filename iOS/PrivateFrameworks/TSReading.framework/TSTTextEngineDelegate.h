//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextDelegate-Protocol.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    unsigned int mVerticalAlignment;
}

- (_Bool)forceWesternLineBreaking;
- (unsigned int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(unsigned int)arg2;

@end

