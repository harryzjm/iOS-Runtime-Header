//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanValidating-Protocol.h>

@class NSString;

@interface CTCellularPlanDateParser : NSObject <CTCellularPlanValidating>
{
}

+ (_Bool)validate:(id)arg1;
+ (_Bool)validate:(id)arg1 parseTo:(double *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

