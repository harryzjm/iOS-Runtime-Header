//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSEvent;

@interface CLSEventResult : NSObject
{
    float _confidence;
    CLSEvent *_event;
}

+ (id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)description;
- (void)mergeWithResult:(id)arg1;
- (_Bool)isSameEventAsResult:(id)arg1;

@end

