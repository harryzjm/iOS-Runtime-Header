//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject
{
    EKObjectID *_objectID;
    double _date;
}

- (void).cxx_destruct;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
- (id)description;
- (id)initWithObjectID:(id)arg1 date:(double)arg2;

@end
