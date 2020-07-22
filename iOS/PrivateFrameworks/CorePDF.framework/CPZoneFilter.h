//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CPPage;

@interface CPZoneFilter : NSObject
{
    CPPage *page;
    double minArea;
}

+ (void)filterZonesInPage:(id)arg1;
- (void)findUsedGraphicsInZone:(id)arg1;
- (void)findBackgroundGraphicsInZone:(id)arg1;
- (void)filterZonesInZone:(id)arg1;
- (id)initWithPage:(id)arg1;

@end

