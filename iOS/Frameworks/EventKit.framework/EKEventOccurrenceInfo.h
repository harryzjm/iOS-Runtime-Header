//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EKObjectID;

__attribute__((visibility("hidden")))
@interface EKEventOccurrenceInfo : NSObject
{
    EKObjectID *_objectID;
    double _date;
}

@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectID:(id)arg1 date:(double)arg2;

@end

