//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/ProgressiveResultsHandlerProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol>
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;
- (void)completedWithError:(id)arg1;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
