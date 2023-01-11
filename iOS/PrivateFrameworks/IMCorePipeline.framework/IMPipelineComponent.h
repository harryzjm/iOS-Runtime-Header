//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCorePipeline/IMPipelineComponent-Protocol.h>

@protocol IMPipelineComponent;

@interface IMPipelineComponent : NSObject <IMPipelineComponent>
{
    id <IMPipelineComponent> _nextComponent;
}

+ (id)pipelineFromComponents:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IMPipelineComponent> nextComponent; // @synthesize nextComponent=_nextComponent;
- (id)runWithInput:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;
- (id)bindTo:(id)arg1;

@end
