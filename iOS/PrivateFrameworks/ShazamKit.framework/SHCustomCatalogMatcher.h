//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHMatcher-Protocol.h>

@class MRE, NSString, SHCustomCatalog;
@protocol SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogMatcher : NSObject <SHMatcher>
{
    id <SHMatcherDelegate> delegate;
    MRE *_mre;
    SHCustomCatalog *_customCatalog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SHCustomCatalog *customCatalog; // @synthesize customCatalog=_customCatalog;
@property(retain, nonatomic) MRE *mre; // @synthesize mre=_mre;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (id)mediaItemsFromMREResult:(id)arg1 audioStartDate:(id)arg2;
- (void)startRecognitionForRequest:(id)arg1;
- (id)MRESignaturesFromMatches:(id)arg1;
- (void)buildMRE;
- (long long)storeDensityToMREDensity:(long long)arg1;
- (id)initWithCustomCatalog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
