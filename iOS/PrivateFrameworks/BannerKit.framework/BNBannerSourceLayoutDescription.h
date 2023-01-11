//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/BSXPCSecureCoding-Protocol.h>

@class NSString;

@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding>
{
    struct CGSize _containerSize;
    struct CGSize _presentationSize;
}

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_initWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
