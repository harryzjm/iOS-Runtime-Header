//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKUICompletion : NSObject <SKUICacheCoding>
{
    NSString *_alternateTitle;
    NSString *_title;
    NSString *_URLString;
}

@property(readonly, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *alternateTitle; // @synthesize alternateTitle=_alternateTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
