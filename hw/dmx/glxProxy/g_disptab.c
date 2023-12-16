/* DO NOT EDIT - THIS FILE IS AUTOMATICALLY GENERATED */
/*
 * SGI FREE SOFTWARE LICENSE B (Version 2.0, Sept. 18, 2008)
 * Copyright (C) 1991-2000 Silicon Graphics, Inc. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice including the dates of first publication and
 * either this permission notice or a reference to
 * http://oss.sgi.com/projects/FreeB/
 * shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * SILICON GRAPHICS, INC. BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of Silicon Graphics, Inc.
 * shall not be used in advertising or otherwise to promote the sale, use or
 * other dealings in this Software without prior written authorization from
 * Silicon Graphics, Inc.
 */

#include "glxserver.h"
#include "glxext.h"
#include "g_disptab.h"
#include "glxsingle.h"

__GLXdispatchSingleProcPtr __glXSingleTable[] = {
    __glXNoSuchSingleOpcode,
    __glXRender,
    __glXRenderLarge,
    __glXCreateContext,
    __glXDestroyContext,
    __glXMakeCurrent,
    __glXIsDirect,
    __glXQueryVersion,
    __glXWaitGL,
    __glXWaitX,
    __glXCopyContext,
    __glXSwapBuffers,
    __glXUseXFont,
    __glXCreateGLXPixmap,
    __glXGetVisualConfigs,
    __glXDestroyGLXPixmap,
    __glXVendorPrivate,
    __glXVendorPrivateWithReply,
    __glXQueryExtensionsString,
    __glXQueryServerString,
    __glXClientInfo,
    __glXGetFBConfigs,          /* __glXGetFBConfigs */
    __glXCreatePixmap,          /* __glXCreatePixmap, */
    __glXDestroyGLXPixmap,      /* __glXDestroyPixmap, */
    __glXCreateNewContext,      /* __glXCreateNewContext, */
    __glXQueryContext,          /* __glXQueryContext, */
    __glXMakeContextCurrent,    /* __glXMakeContextCurrent, */
    __glXCreatePbuffer,         /* __glXCreatePbuffer, */
    __glXDestroyPbuffer,        /* __glXDestroyPbuffer, */
    __glXGetDrawableAttributes, /* __glXGetDrawableAttributes, */
    __glXChangeDrawableAttributes,      /* __glXChangeDrawableAttributes, */
    __glXCreateWindow,          /* __glXCreateWindow, */
    __glXDestroyWindow,         /* __glXDestroyWindow, */
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXForwardSingleReq,      /* __glXDisp_NewList, */
    __glXForwardSingleReq,      /* __glXDisp_EndList, */
    __glXForwardSingleReq,      /* __glXDisp_DeleteLists, */
    __glXForwardPipe0WithReply, /* __glXDisp_GenLists, */
    __glXForwardSingleReq,      /* __glXDisp_FeedbackBuffer, */
    __glXForwardSingleReq,      /* __glXDisp_SelectBuffer, */
    __glXForwardAllWithReply,   /* __glXDisp_RenderMode, */
    __glXForwardAllWithReply,   /* __glXDisp_Finish, */
    __glXForwardSingleReq,      /* __glXDisp_PixelStoref, */
    __glXForwardSingleReq,      /* __glXDisp_PixelStorei, */
    __glXDisp_ReadPixels,       /* __glXDisp_ReadPixels, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetBooleanv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetClipPlane, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetDoublev, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetError, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetFloatv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetIntegerv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetLightfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetLightiv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMapdv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMapfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMapiv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMaterialfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMaterialiv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetPixelMapfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetPixelMapuiv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetPixelMapusv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetPolygonStipple, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetString, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexEnvfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexEnviv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexGendv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexGenfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexGeniv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexImage, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexParameteriv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexLevelParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetTexLevelParameteriv, */
    __glXForwardPipe0WithReply, /* __glXDisp_IsEnabled, */
    __glXForwardPipe0WithReply, /* __glXDisp_IsList, */
    __glXForwardSingleReq,      /* __glXDisp_Flush, */
    __glXForwardPipe0WithReply, /* __glXDisp_AreTexturesResident, */
    __glXForwardSingleReq,      /* __glXDisp_DeleteTextures, */
    __glXForwardAllWithReply,   /* __glXDisp_GenTextures, */
    __glXForwardPipe0WithReply, /* __glXDisp_IsTexture, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetColorTable, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetColorTableParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetColorTableParameteriv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetConvolutionFilter, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetConvolutionParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetConvolutionParameteriv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetSeparableFilter, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetHistogram, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetHistogramParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetHistogramParameteriv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMinmax, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMinmaxParameterfv, */
    __glXForwardPipe0WithReply, /* __glXDisp_GetMinmaxParameteriv, */
};

__GLXdispatchSingleProcPtr __glXSwapSingleTable[] = {
    __glXNoSuchSingleOpcode,
    __glXSwapRender,
    __glXSwapRenderLarge,
    __glXSwapCreateContext,
    __glXSwapDestroyContext,
    __glXSwapMakeCurrent,
    __glXSwapIsDirect,
    __glXSwapQueryVersion,
    __glXSwapWaitGL,
    __glXSwapWaitX,
    __glXSwapCopyContext,
    __glXSwapSwapBuffers,
    __glXSwapUseXFont,
    __glXSwapCreateGLXPixmap,
    __glXSwapGetVisualConfigs,
    __glXSwapDestroyGLXPixmap,
    __glXSwapVendorPrivate,
    __glXSwapVendorPrivateWithReply,
    __glXSwapQueryExtensionsString,
    __glXSwapQueryServerString,
    __glXSwapClientInfo,
    __glXSwapGetFBConfigs,
    __glXSwapCreatePixmap,
    __glXSwapDestroyGLXPixmap,
    __glXSwapCreateNewContext,
    __glXSwapQueryContext,
    __glXSwapMakeContextCurrent,
    __glXSwapCreatePbuffer,
    __glXSwapDestroyPbuffer,
    __glXSwapGetDrawableAttributes,
    __glXSwapChangeDrawableAttributes,
    __glXSwapCreateWindow,
    __glXSwapDestroyWindow,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXNoSuchSingleOpcode,
    __glXForwardSingleReqSwap,  /* __glXDisp_NewList, */
    __glXForwardSingleReqSwap,  /* __glXDisp_EndList, */
    __glXForwardSingleReqSwap,  /* __glXDisp_DeleteLists, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_GenLists, */
    __glXForwardSingleReqSwap,  /* __glXDisp_FeedbackBuffer, */
    __glXForwardSingleReqSwap,  /* __glXDisp_SelectBuffer, */
    __glXForwardAllWithReplySwapiv,     /* __glXDisp_RenderMode, */
    __glXForwardAllWithReplySwap,       /* __glXDisp_Finish, */
    __glXForwardSingleReqSwap,  /* __glXDisp_PixelStoref, */
    __glXForwardSingleReqSwap,  /* __glXDisp_PixelStorei, */
    __glXDisp_ReadPixels,       /* __glXDisp_ReadPixels, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_GetBooleanv, */
    __glXForwardPipe0WithReplySwapdv,   /* __glXDisp_GetClipPlane, */
    __glXForwardPipe0WithReplySwapdv,   /* __glXDisp_GetDoublev, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_GetError, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetFloatv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetIntegerv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetLightfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetLightiv, */
    __glXForwardPipe0WithReplySwapdv,   /* __glXDisp_GetMapdv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMapfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMapiv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMaterialfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMaterialiv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetPixelMapfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetPixelMapuiv, */
    __glXForwardPipe0WithReplySwapsv,   /* __glXDisp_GetPixelMapusv, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_GetPolygonStipple, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_GetString, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexEnvfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexEnviv, */
    __glXForwardPipe0WithReplySwapdv,   /* __glXDisp_GetTexGendv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexGenfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexGeniv, */
    __glXDispSwap_GetTexImage,  /* __glXDisp_GetTexImage, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexParameteriv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexLevelParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetTexLevelParameteriv, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_IsEnabled, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_IsList, */
    __glXForwardSingleReqSwap,  /* __glXDisp_Flush, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_AreTexturesResident, */
    __glXForwardSingleReqSwap,  /* __glXDisp_DeleteTextures, */
    __glXForwardAllWithReplySwapiv,     /* __glXDisp_GenTextures, */
    __glXForwardPipe0WithReplySwap,     /* __glXDisp_IsTexture, */
    __glXDispSwap_GetColorTable,        /* __glXDisp_GetColorTable, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetColorTableParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetColorTableParameteriv, */
    __glXDispSwap_GetColorTable,        /* __glXDisp_GetConvolutionFilter, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetConvolutionParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetConvolutionParameteriv, */
    __glXDispSwap_GetColorTable,        /* __glXDisp_GetSeparableFilter, */
    __glXDispSwap_GetColorTable,        /* __glXDisp_GetHistogram, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetHistogramParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetHistogramParameteriv, */
    __glXDispSwap_GetColorTable,        /* __glXDisp_GetMinmax, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMinmaxParameterfv, */
    __glXForwardPipe0WithReplySwapiv,   /* __glXDisp_GetMinmaxParameteriv, */
};

__GLXdispatchRenderProcPtr __glXSwapRenderTable[] = {
    __glXNoSuchRenderOpcode,
    __glXDispSwap_CallList,
    __glXDispSwap_CallLists,
    __glXDispSwap_ListBase,
    __glXDispSwap_Begin,
    __glXDispSwap_Bitmap,
    __glXDispSwap_Color3bv,
    __glXDispSwap_Color3dv,
    __glXDispSwap_Color3fv,
    __glXDispSwap_Color3iv,
    __glXDispSwap_Color3sv,
    __glXDispSwap_Color3ubv,
    __glXDispSwap_Color3uiv,
    __glXDispSwap_Color3usv,
    __glXDispSwap_Color4bv,
    __glXDispSwap_Color4dv,
    __glXDispSwap_Color4fv,
    __glXDispSwap_Color4iv,
    __glXDispSwap_Color4sv,
    __glXDispSwap_Color4ubv,
    __glXDispSwap_Color4uiv,
    __glXDispSwap_Color4usv,
    __glXDispSwap_EdgeFlagv,
    __glXDispSwap_End,
    __glXDispSwap_Indexdv,
    __glXDispSwap_Indexfv,
    __glXDispSwap_Indexiv,
    __glXDispSwap_Indexsv,
    __glXDispSwap_Normal3bv,
    __glXDispSwap_Normal3dv,
    __glXDispSwap_Normal3fv,
    __glXDispSwap_Normal3iv,
    __glXDispSwap_Normal3sv,
    __glXDispSwap_RasterPos2dv,
    __glXDispSwap_RasterPos2fv,
    __glXDispSwap_RasterPos2iv,
    __glXDispSwap_RasterPos2sv,
    __glXDispSwap_RasterPos3dv,
    __glXDispSwap_RasterPos3fv,
    __glXDispSwap_RasterPos3iv,
    __glXDispSwap_RasterPos3sv,
    __glXDispSwap_RasterPos4dv,
    __glXDispSwap_RasterPos4fv,
    __glXDispSwap_RasterPos4iv,
    __glXDispSwap_RasterPos4sv,
    __glXDispSwap_Rectdv,
    __glXDispSwap_Rectfv,
    __glXDispSwap_Rectiv,
    __glXDispSwap_Rectsv,
    __glXDispSwap_TexCoord1dv,
    __glXDispSwap_TexCoord1fv,
    __glXDispSwap_TexCoord1iv,
    __glXDispSwap_TexCoord1sv,
    __glXDispSwap_TexCoord2dv,
    __glXDispSwap_TexCoord2fv,
    __glXDispSwap_TexCoord2iv,
    __glXDispSwap_TexCoord2sv,
    __glXDispSwap_TexCoord3dv,
    __glXDispSwap_TexCoord3fv,
    __glXDispSwap_TexCoord3iv,
    __glXDispSwap_TexCoord3sv,
    __glXDispSwap_TexCoord4dv,
    __glXDispSwap_TexCoord4fv,
    __glXDispSwap_TexCoord4iv,
    __glXDispSwap_TexCoord4sv,
    __glXDispSwap_Vertex2dv,
    __glXDispSwap_Vertex2fv,
    __glXDispSwap_Vertex2iv,
    __glXDispSwap_Vertex2sv,
    __glXDispSwap_Vertex3dv,
    __glXDispSwap_Vertex3fv,
    __glXDispSwap_Vertex3iv,
    __glXDispSwap_Vertex3sv,
    __glXDispSwap_Vertex4dv,
    __glXDispSwap_Vertex4fv,
    __glXDispSwap_Vertex4iv,
    __glXDispSwap_Vertex4sv,
    __glXDispSwap_ClipPlane,
    __glXDispSwap_ColorMaterial,
    __glXDispSwap_CullFace,
    __glXDispSwap_Fogf,
    __glXDispSwap_Fogfv,
    __glXDispSwap_Fogi,
    __glXDispSwap_Fogiv,
    __glXDispSwap_FrontFace,
    __glXDispSwap_Hint,
    __glXDispSwap_Lightf,
    __glXDispSwap_Lightfv,
    __glXDispSwap_Lighti,
    __glXDispSwap_Lightiv,
    __glXDispSwap_LightModelf,
    __glXDispSwap_LightModelfv,
    __glXDispSwap_LightModeli,
    __glXDispSwap_LightModeliv,
    __glXDispSwap_LineStipple,
    __glXDispSwap_LineWidth,
    __glXDispSwap_Materialf,
    __glXDispSwap_Materialfv,
    __glXDispSwap_Materiali,
    __glXDispSwap_Materialiv,
    __glXDispSwap_PointSize,
    __glXDispSwap_PolygonMode,
    __glXDispSwap_PolygonStipple,
    __glXDispSwap_Scissor,
    __glXDispSwap_ShadeModel,
    __glXDispSwap_TexParameterf,
    __glXDispSwap_TexParameterfv,
    __glXDispSwap_TexParameteri,
    __glXDispSwap_TexParameteriv,
    __glXDispSwap_TexImage1D,
    __glXDispSwap_TexImage2D,
    __glXDispSwap_TexEnvf,
    __glXDispSwap_TexEnvfv,
    __glXDispSwap_TexEnvi,
    __glXDispSwap_TexEnviv,
    __glXDispSwap_TexGend,
    __glXDispSwap_TexGendv,
    __glXDispSwap_TexGenf,
    __glXDispSwap_TexGenfv,
    __glXDispSwap_TexGeni,
    __glXDispSwap_TexGeniv,
    __glXDispSwap_InitNames,
    __glXDispSwap_LoadName,
    __glXDispSwap_PassThrough,
    __glXDispSwap_PopName,
    __glXDispSwap_PushName,
    __glXDispSwap_DrawBuffer,
    __glXDispSwap_Clear,
    __glXDispSwap_ClearAccum,
    __glXDispSwap_ClearIndex,
    __glXDispSwap_ClearColor,
    __glXDispSwap_ClearStencil,
    __glXDispSwap_ClearDepth,
    __glXDispSwap_StencilMask,
    __glXDispSwap_ColorMask,
    __glXDispSwap_DepthMask,
    __glXDispSwap_IndexMask,
    __glXDispSwap_Accum,
    __glXDispSwap_Disable,
    __glXDispSwap_Enable,
    __glXNoSuchRenderOpcode,
    __glXDispSwap_PopAttrib,
    __glXDispSwap_PushAttrib,
    __glXDispSwap_Map1d,
    __glXDispSwap_Map1f,
    __glXDispSwap_Map2d,
    __glXDispSwap_Map2f,
    __glXDispSwap_MapGrid1d,
    __glXDispSwap_MapGrid1f,
    __glXDispSwap_MapGrid2d,
    __glXDispSwap_MapGrid2f,
    __glXDispSwap_EvalCoord1dv,
    __glXDispSwap_EvalCoord1fv,
    __glXDispSwap_EvalCoord2dv,
    __glXDispSwap_EvalCoord2fv,
    __glXDispSwap_EvalMesh1,
    __glXDispSwap_EvalPoint1,
    __glXDispSwap_EvalMesh2,
    __glXDispSwap_EvalPoint2,
    __glXDispSwap_AlphaFunc,
    __glXDispSwap_BlendFunc,
    __glXDispSwap_LogicOp,
    __glXDispSwap_StencilFunc,
    __glXDispSwap_StencilOp,
    __glXDispSwap_DepthFunc,
    __glXDispSwap_PixelZoom,
    __glXDispSwap_PixelTransferf,
    __glXDispSwap_PixelTransferi,
    __glXDispSwap_PixelMapfv,
    __glXDispSwap_PixelMapuiv,
    __glXDispSwap_PixelMapusv,
    __glXDispSwap_ReadBuffer,
    __glXDispSwap_CopyPixels,
    __glXDispSwap_DrawPixels,
    __glXDispSwap_DepthRange,
    __glXDispSwap_Frustum,
    __glXDispSwap_LoadIdentity,
    __glXDispSwap_LoadMatrixf,
    __glXDispSwap_LoadMatrixd,
    __glXDispSwap_MatrixMode,
    __glXDispSwap_MultMatrixf,
    __glXDispSwap_MultMatrixd,
    __glXDispSwap_Ortho,
    __glXDispSwap_PopMatrix,
    __glXDispSwap_PushMatrix,
    __glXDispSwap_Rotated,
    __glXDispSwap_Rotatef,
    __glXDispSwap_Scaled,
    __glXDispSwap_Scalef,
    __glXDispSwap_Translated,
    __glXDispSwap_Translatef,
    __glXDispSwap_Viewport,
    __glXDispSwap_PolygonOffset,
    __glXDispSwap_DrawArrays,
    __glXDispSwap_Indexubv,
    __glXDispSwap_ColorSubTable,
    __glXDispSwap_CopyColorSubTable,
    __glXDispSwap_ActiveTextureARB,
    __glXDispSwap_MultiTexCoord1dvARB,
    __glXDispSwap_MultiTexCoord1fvARB,
    __glXDispSwap_MultiTexCoord1ivARB,
    __glXDispSwap_MultiTexCoord1svARB,
    __glXDispSwap_MultiTexCoord2dvARB,
    __glXDispSwap_MultiTexCoord2fvARB,
    __glXDispSwap_MultiTexCoord2ivARB,
    __glXDispSwap_MultiTexCoord2svARB,
    __glXDispSwap_MultiTexCoord3dvARB,
    __glXDispSwap_MultiTexCoord3fvARB,
    __glXDispSwap_MultiTexCoord3ivARB,
    __glXDispSwap_MultiTexCoord3svARB,
    __glXDispSwap_MultiTexCoord4dvARB,
    __glXDispSwap_MultiTexCoord4fvARB,
    __glXDispSwap_MultiTexCoord4ivARB,
    __glXDispSwap_MultiTexCoord4svARB,
};

__GLXRenderSwapInfo __glXSwapRenderTable_EXT[] = {
    {4, 4, NULL},               /* X_GLrop_BlendColorEXT */
    {4, 1, NULL},               /* X_GLrop_BlendEquationEXT */
    {4, 2, NULL},               /* X_GLrop_PolygonOffsetEXT */
    {4, 0, __glXDispSwap_TexSubImage1D},        /* X_GLrop_TexSubImage1DEXT */
    {4, 0, __glXDispSwap_TexSubImage2D},        /* X_GLrop_TexSubImage2DEXT */
    {4, 0, __glXDispSwap_ConvolutionFilter1D},  /* X_GLrop_ConvolutionFilter1DEXT */
    {4, 0, __glXDispSwap_ConvolutionFilter2D},  /* X_GLrop_ConvolutionFilter2DEXT */
    {4, 3, NULL},               /* X_GLrop_ConvolutionParameterfEXT */
    {4, 0, __glXDispSwap_ConvolutionParameterfv},       /* X_GLrop_ConvolutionParameterfvEXT */
    {4, 3, NULL},               /* X_GLrop_ConvolutionParameteriEXT */
    {4, 0, __glXDispSwap_ConvolutionParameteriv},       /* X_GLrop_ConvolutionParameterivEXT */
    {4, 0, __glXDispSwap_CopyConvolutionFilter1D},      /* X_GLrop_CopyConvolutionFilter1DEXT */
    {4, 0, __glXDispSwap_CopyConvolutionFilter2D},      /* X_GLrop_CopyConvolutionFilter2DEXT */
    {4, 0, __glXDispSwap_SeparableFilter2D},    /* X_GLrop_SeparableFilter2DEXT */
    {4, 3, NULL},               /* X_GLrop_HistogramEXT */
    {4, 2, NULL},               /* X_GLrop_MinmaxEXT */
    {4, 1, NULL},               /* X_GLrop_ResetHistogramEXT */
    {4, 1, NULL},               /* X_GLrop_ResetMinmaxEXT */
    {4, 0, __glXDispSwap_TexImage3D},   /* X_GLrop_TexImage3DEXT */
    {4, 0, __glXDispSwap_TexSubImage3D},        /* X_GLrop_TexSubImage3DEXT */
    {4, 0, __glXDispSwap_DrawArrays},   /* X_GLrop_DrawArraysEXT */
    {4, 2, NULL},               /* X_GLrop_BindTextureEXT */
    {4, 0, __glXDispSwap_PrioritizeTextures},   /* X_GLrop_PrioritizeTexturesEXT */
    {4, 0, __glXDispSwap_CopyTexImage1D},       /* X_GLrop_CopyTexImage1DEXT */
    {4, 0, __glXDispSwap_CopyTexImage2D},       /* X_GLrop_CopyTexImage2DEXT */
    {4, 0, __glXDispSwap_CopyTexSubImage1D},    /* X_GLrop_CopyTexSubImage1DEXT */
    {4, 0, __glXDispSwap_CopyTexSubImage2D},    /* X_GLrop_CopyTexSubImage2DEXT */
    {4, 0, __glXDispSwap_CopyTexSubImage3D},    /* X_GLrop_CopyTexSubImage3DEXT */

};
