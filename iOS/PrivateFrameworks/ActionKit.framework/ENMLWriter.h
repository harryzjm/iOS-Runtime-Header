//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ENMLWriter
{
}

+ (id)emptyNote;
+ (_Bool)validateURLComponents:(id)arg1;
- (void)writeTodoWithCheckedState:(_Bool)arg1;
- (void)writeEncryptedInfo:(id)arg1;
- (void)writeResource:(id)arg1;
- (void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3;
- (_Bool)startElement:(id)arg1 attributes:(id)arg2;
- (id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2;
- (void)endDocument;
- (void)startDocument;
- (void)startDocumentWithAttributes:(id)arg1;
- (id)init;

@end
