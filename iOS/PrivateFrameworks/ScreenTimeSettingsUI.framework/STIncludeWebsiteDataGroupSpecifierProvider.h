//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STIncludeWebsiteDataGroupSpecifierProvider
{
    PSSpecifier *_toggleIncludeWebsiteDataSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *toggleIncludeWebsiteDataSpecifier; // @synthesize toggleIncludeWebsiteDataSpecifier=_toggleIncludeWebsiteDataSpecifier;
- (id)includeWebsiteData:(id)arg1;
- (void)setIncludeWebsiteData:(id)arg1 specifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

