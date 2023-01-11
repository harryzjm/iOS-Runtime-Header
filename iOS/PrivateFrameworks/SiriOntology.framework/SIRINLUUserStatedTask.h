//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUUserDialogAct-Protocol.h>

@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct>
{
    USOSerializedGraph *_task;
    USOSerializedGraph *_goal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) USOSerializedGraph *goal; // @synthesize goal=_goal;
@property(retain, nonatomic) USOSerializedGraph *task; // @synthesize task=_task;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGoal:(id)arg1;
- (id)initWithTask:(id)arg1;

@end
