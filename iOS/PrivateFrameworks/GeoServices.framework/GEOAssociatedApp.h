//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDAssociatedApp, NSArray, NSString;

@interface GEOAssociatedApp : NSObject
{
    GEOPDAssociatedApp *_geoAssociatedApp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp; // @synthesize geoAssociatedApp=_geoAssociatedApp;
@property(readonly, nonatomic) NSArray *alternateAppAdamIds;
@property(readonly, nonatomic) NSString *preferredAppAdamId;
@property(readonly, nonatomic) _Bool hasPreferredAppAdamId;
- (id)initWithGEOPDAssociatedApp:(id)arg1;

@end
