//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>

@class MISSING_TYPE, TSUColor;

@interface _TtC16KeynoteQuicklook35KNLiveVideoSourceSymbolTintColorSet : NSObject <NSCopying>
{
    MISSING_TYPE *storage;
}

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) TSUColor *secondaryLabelColor;
@property(nonatomic, readonly) TSUColor *labelColor;
@property(nonatomic, readonly) TSUColor *backgroundGradientSwatchOutlineColor;
@property(nonatomic, readonly) TSUColor *backgroundGradientBottomColor;
@property(nonatomic, readonly) TSUColor *backgroundGradientTopColor;
@property(nonatomic, readonly) TSUColor *foregroundColor;
- (id)initWithForegroundColor:(id)arg1 backgroundGradientTopColor:(id)arg2 backgroundGradientBottomColor:(id)arg3 backgroundGradientSwatchOutlineColor:(id)arg4 labelColor:(id)arg5 secondaryLabelColor:(id)arg6;

@end
