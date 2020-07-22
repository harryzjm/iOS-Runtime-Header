//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPTextDelegate-Protocol.h>

@class TSULocale, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    int mVerticalAlignment;
    double mMaxWidthForChildren;
    TSULocale *mLocale;
}

@property(readonly, nonatomic) TSULocale *locale; // @synthesize locale=mLocale;
@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=mMaxWidthForChildren;
- (_Bool)forceWesternLineBreaking;
- (int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(int)arg2 locale:(id)arg3;

@end
