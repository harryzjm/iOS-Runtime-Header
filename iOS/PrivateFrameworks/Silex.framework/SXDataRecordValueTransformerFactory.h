//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SXDocumentController;

@interface SXDataRecordValueTransformerFactory : NSObject
{
    SXDocumentController *_documentController;
}

@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
- (void).cxx_destruct;
- (id)recordValueTransformerForDataDescriptor:(id)arg1;
- (id)initWithDocumentController:(id)arg1;

@end
