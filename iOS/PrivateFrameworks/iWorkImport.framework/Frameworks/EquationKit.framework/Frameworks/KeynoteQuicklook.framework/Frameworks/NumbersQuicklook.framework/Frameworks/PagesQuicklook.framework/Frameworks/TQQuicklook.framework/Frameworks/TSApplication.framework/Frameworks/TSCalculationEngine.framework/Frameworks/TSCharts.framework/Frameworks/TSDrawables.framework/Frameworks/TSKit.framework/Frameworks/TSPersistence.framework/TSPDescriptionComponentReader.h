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
- (id)unknownObjectUnarchiverWithArchiveInfo:(const void *)arg1 stream:(struct DispatchDataInputStream *)arg2 ignoreMessageData:(_Bool)arg3 hasAlternateMessages:(_Bool)arg4;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const void *)arg2 unarchiveClass:(Class)arg3 message:(void *)arg4 messageVersion:(unsigned long long)arg5 strongReferences:(unique_ptr_3df01401)arg6 unknownContent:(id)arg7 hasAlternateMessages:(_Bool)arg8;
- (_Bool)shouldValidateComponentsOfInMemoryObjects;
- (_Bool)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4;

@end

