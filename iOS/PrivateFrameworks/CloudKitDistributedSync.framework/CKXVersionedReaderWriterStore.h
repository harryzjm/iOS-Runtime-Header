//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXORCReader, CKXORCWriter, CKXUncompressedReader, CKXUncompressedWriter, NSDictionary;
@protocol CKXBinding;

@interface CKXVersionedReaderWriterStore : NSObject
{
    CKXUncompressedReader *_uncompressedReader;
    CKXUncompressedWriter *_uncompressedWriter;
    CKXORCReader *_orcReader;
    CKXORCWriter *_orcWriter;
    NSObject<CKXBinding> *_binding;
    NSDictionary *_optionsByReaderWriterClass;
}

+ (_Bool)versionSupported:(unsigned char)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *optionsByReaderWriterClass; // @synthesize optionsByReaderWriterClass=_optionsByReaderWriterClass;
@property(retain, nonatomic) NSObject<CKXBinding> *binding; // @synthesize binding=_binding;
@property(retain, nonatomic) CKXORCWriter *orcWriter; // @synthesize orcWriter=_orcWriter;
@property(retain, nonatomic) CKXORCReader *orcReader; // @synthesize orcReader=_orcReader;
@property(retain, nonatomic) CKXUncompressedWriter *uncompressedWriter; // @synthesize uncompressedWriter=_uncompressedWriter;
@property(retain, nonatomic) CKXUncompressedReader *uncompressedReader; // @synthesize uncompressedReader=_uncompressedReader;
- (id)createWriterForVersionIfNecessary:(unsigned char)arg1;
- (id)createReaderForVersionIfNecessary:(unsigned char)arg1;
- (id)writerForVersion:(unsigned char)arg1;
- (id)readerForVersion:(unsigned char)arg1;
- (id)initWithBinding:(id)arg1 optionsByReaderWriterClass:(id)arg2;

@end
