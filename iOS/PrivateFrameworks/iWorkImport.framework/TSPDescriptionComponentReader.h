//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPDescriptionGenerator;

__attribute__((visibility("hidden")))
@interface TSPDescriptionComponentReader
{
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(auto_ptr_4370f086 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr_945ad503)arg5 unknownContent:(id)arg6;
- (_Bool)shouldValidateComponentsOfInMemoryObjects;
- (_Bool)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4;
- (id)init;

@end
