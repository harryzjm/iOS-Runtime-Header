//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXNamespace, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface ODXState
{
    CXNamespace *mODXDiagramNamespace;
    OAXDrawingState *mOfficeArtState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXNamespace *ODXDiagramNamespace; // @synthesize ODXDiagramNamespace=mODXDiagramNamespace;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)officeArtState;
- (id)initWithOfficeArtState:(id)arg1;

@end

