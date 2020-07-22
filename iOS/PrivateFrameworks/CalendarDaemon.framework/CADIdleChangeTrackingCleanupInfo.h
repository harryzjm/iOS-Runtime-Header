//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CADIdleChangeTrackingCleanupInfo : NSObject
{
    int _numberOfChanges;
    double _languishPeriod;
}

+ (id)serverIdleChangeTrackingCleanupInfo;
@property(nonatomic) int numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property(nonatomic) double languishPeriod; // @synthesize languishPeriod=_languishPeriod;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToInfo:(id)arg1;
- (id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2;

@end
