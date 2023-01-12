//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface HKSignedClinicalDataDisplayItem : NSObject
{
    long long _type;
    long long _subtitleStyle;
    NSString *_titleText;
    NSString *_detailText;
    NSAttributedString *_attributedDetailText;
}

+ (id)valueItemWithTitleText:(id)arg1 attributedDetailText:(id)arg2;
+ (id)valueItemWithTitleText:(id)arg1 detailText:(id)arg2;
+ (id)subtitleItemWithTitleText:(id)arg1 detailText:(id)arg2 style:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(nonatomic) long long type; // @synthesize type=_type;

@end
