//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject
{
    ACHTemplateStore *_templateStore;
    NSCalendar *_gregorianCalendar;
}

@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
- (void).cxx_destruct;
- (id)earnedInstancesLimitedByEarnLimit:(id)arg1;
- (id)earnedInstancesWithoutDuplicates:(id)arg1;
- (id)initWithTemplateStore:(id)arg1;

@end

