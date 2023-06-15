//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SUUIStorePageItemPinningConfiguration : NSObject
{
    _Bool _hasValidPinningContentInset;
    _Bool _hasValidPinningStyle;
    _Bool _hasValidPinningGroup;
    _Bool _hasValidPinningTransitionStyle;
    long long _pinningStyle;
    long long _pinningGroup;
    long long _pinningTransitionStyle;
    struct UIEdgeInsets _pinningContentInset;
}

@property(readonly, nonatomic) _Bool hasValidPinningTransitionStyle; // @synthesize hasValidPinningTransitionStyle=_hasValidPinningTransitionStyle;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(readonly, nonatomic) _Bool hasValidPinningGroup; // @synthesize hasValidPinningGroup=_hasValidPinningGroup;
@property(readonly, nonatomic) _Bool hasValidPinningStyle; // @synthesize hasValidPinningStyle=_hasValidPinningStyle;
@property(nonatomic) long long pinningGroup; // @synthesize pinningGroup=_pinningGroup;
@property(nonatomic) long long pinningStyle; // @synthesize pinningStyle=_pinningStyle;
@property(readonly, nonatomic) _Bool hasValidPinningContentInset; // @synthesize hasValidPinningContentInset=_hasValidPinningContentInset;
@property(nonatomic) struct UIEdgeInsets pinningContentInset; // @synthesize pinningContentInset=_pinningContentInset;
- (void)invalidatePinningTransitionStyle;
- (void)invalidatePinningGroup;
- (void)invalidatePinningStyle;
- (void)invalidatePinningContentInset;

@end

