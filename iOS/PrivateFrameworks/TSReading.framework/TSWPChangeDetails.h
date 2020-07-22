//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;
@protocol TSKModel;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    NSString *mChangeString;
    id <TSKModel> model;
    TSWPChange *_change;
}

@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
@property(nonatomic) id <TSKModel> model; // @synthesize model;
- (void)commitText:(id)arg1;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingString;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToChangeDetails:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChange:(id)arg1 changeString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly) Class superclass;

@end

