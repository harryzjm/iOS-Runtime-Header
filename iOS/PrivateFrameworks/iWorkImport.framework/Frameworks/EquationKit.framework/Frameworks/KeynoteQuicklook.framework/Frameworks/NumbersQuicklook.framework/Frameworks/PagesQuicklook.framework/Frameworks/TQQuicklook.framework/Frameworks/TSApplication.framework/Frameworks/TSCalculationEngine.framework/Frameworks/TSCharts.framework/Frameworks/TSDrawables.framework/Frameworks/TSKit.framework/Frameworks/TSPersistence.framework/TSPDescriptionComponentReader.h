//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader
{
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverWithArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2 ignoreMessageData:(_Bool)arg3;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(unique_ptr_1c88daa6 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(unique_ptr_375828ba)arg5 unknownContent:(id)arg6;
- (_Bool)shouldValidateComponentsOfInMemoryObjects;
- (_Bool)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4;

@end
