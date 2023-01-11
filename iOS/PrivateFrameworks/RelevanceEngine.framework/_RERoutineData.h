//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REIndentedDescription-Protocol.h>

@class NSArray, NSString;

@interface _RERoutineData : NSObject <REIndentedDescription>
{
    long long _mode;
    NSArray *_locationsOfInterest;
}

@property(retain, nonatomic) NSArray *locationsOfInterest; // @synthesize locationsOfInterest=_locationsOfInterest;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
