//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKEncryptedDocumentExporter-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TPPdfExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void).cxx_destruct;
- (void)setOptions:(id)arg1;
- (_Bool)validatePassphrases:(id *)arg1;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

