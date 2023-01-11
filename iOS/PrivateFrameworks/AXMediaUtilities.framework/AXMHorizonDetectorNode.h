//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode
{
    VNDetectHorizonRequest *__detectHorizonRequest;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setDetectHorizonRequest:) VNDetectHorizonRequest *_detectHorizonRequest; // @synthesize _detectHorizonRequest=__detectHorizonRequest;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end
