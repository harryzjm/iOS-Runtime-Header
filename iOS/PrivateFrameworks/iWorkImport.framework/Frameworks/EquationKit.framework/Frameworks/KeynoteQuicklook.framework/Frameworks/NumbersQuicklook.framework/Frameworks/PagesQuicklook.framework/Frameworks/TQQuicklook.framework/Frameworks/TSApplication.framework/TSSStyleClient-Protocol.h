//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSKModel-Protocol.h>

@class NSSet, TSSStyle, TSSStylesheet;

@protocol TSSStyleClient <TSKModel>
@property(readonly, nonatomic) NSSet *referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(TSSStyle * (^)(TSSStyle *))arg1;

@optional
- (void)referencedStyleWasUpdated:(TSSStyle *)arg1;
- (void)afterReplacingReferencedStylesSetStylesheet:(TSSStylesheet *)arg1;
@end

