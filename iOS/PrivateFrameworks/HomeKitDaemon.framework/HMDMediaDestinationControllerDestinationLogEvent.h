//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerDestinationLogEvent
{
    NSString *_existingDestinationType;
    NSString *_destinationType;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(readonly, copy) NSString *existingDestinationType; // @synthesize existingDestinationType=_existingDestinationType;
- (id)initWithExistingDestinationType:(id)arg1 destinationType:(id)arg2 isTriggeredOnControllerDevice:(id)arg3 userPrivilege:(id)arg4;

@end

