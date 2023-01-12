//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface AMSUIBundleImageFetchOperation
{
    NSString *_imageName;
    NSArray *_bundlesToSearch;
    UITraitCollection *_traitCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) NSArray *bundlesToSearch; // @synthesize bundlesToSearch=_bundlesToSearch;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)main;
- (_Bool)isLowLatency;
- (id)initWithImageName:(id)arg1 searchBundles:(id)arg2 compatibleWithTraitCollection:(id)arg3;

@end
