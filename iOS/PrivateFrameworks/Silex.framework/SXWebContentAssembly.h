//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/NFAssembly-Protocol.h>

@class NSString;

@interface SXWebContentAssembly : NSObject <NFAssembly>
{
    unsigned long long _features;
}

@property(readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
- (_Bool)isFeatureEnabled:(unsigned long long)arg1;
- (void)loadInRegistry:(id)arg1;
- (id)initWithFeatures:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

