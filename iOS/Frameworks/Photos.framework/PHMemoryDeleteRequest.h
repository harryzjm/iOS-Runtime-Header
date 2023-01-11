//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHMemoryDeleteRequest
{
    _Bool _clientEntitledToMemoryMutation;
}

@property(readonly, nonatomic) _Bool clientEntitledToMemoryMutation; // @synthesize clientEntitledToMemoryMutation=_clientEntitledToMemoryMutation;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;

@end
