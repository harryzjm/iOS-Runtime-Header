//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMResultOperationDelete
{
    NSObject<OS_xpc_object> *_xpcToMerge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge; // @synthesize xpcToMerge=_xpcToMerge;
- (_Bool)encodeResultOntoReply:(id)arg1;
- (void)mergeWithXPCResult:(id)arg1;

@end

