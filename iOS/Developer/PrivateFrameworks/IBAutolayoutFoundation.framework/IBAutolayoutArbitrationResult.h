//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class NSError, NSString;
@protocol IBCollection;

@interface IBAutolayoutArbitrationResult : NSObject <IBBinaryArchiving>
{
    id <IBCollection> _constraintsToAdd;
    id <IBCollection> _constraintsToRemove;
    NSError *_error;
    NSString *_engineDescription;
}

@property(readonly, nonatomic) NSString *engineDescription; // @synthesize engineDescription=_engineDescription;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <IBCollection> constraintsToRemove; // @synthesize constraintsToRemove=_constraintsToRemove;
@property(readonly, nonatomic) id <IBCollection> constraintsToAdd; // @synthesize constraintsToAdd=_constraintsToAdd;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isErrorResult) _Bool errorResult;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithError:(id)arg1 engineDescription:(id)arg2;
- (id)initWithConstraintsToAdd:(id)arg1 constraintsToRemove:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

