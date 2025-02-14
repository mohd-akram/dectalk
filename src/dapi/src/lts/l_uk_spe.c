/*
 ***********************************************************************
 *                                                                      
 *                           Coryright (c)                              
 *    � Digital Equipment Corporation 1996, 1997. All rights reserved.        
 *                                                                      
 *    Restricted Rights: Use, duplication, or disclosure by the U.S.    
 *    Government is subject to restrictions as set forth in subparagraph
 *    (c) (1) (ii) of DFARS 252.227-7013, or in FAR 52.227-19, or in FAR
 *    52.227-14 Alt. III, as applicable.                                
 *                                                                      
 *    This software is proprietary to and embodies the confidential     
 *    technology of Digital Equipment Corporation and other parties.    
 *    Possession, use, or copying of this software and media is authorized
 *    only pursuant to a valid written license from Digital or an        
 *    authorized sublicensor.                                            
 *                                                                       
 *********************************************************************** 
 *    File Name:	l_uk_spe.c
 *    Author:		Ginger Lin                                       
 *    Creation Date:10/02/97                                                   
 *                                                                             
 *    Functionality:                                                           
 *    Spell vs. Speak rules table.
 *
 ***********************************************************************       
 *    Revision History:
 *
 * Rev	Who		Date			Description                    
 * ---	-----	-----------		--------------------------------------
 * 001	GL      10/02/1997      Created from spel_uk.tab            
 *      
 * 
 */
/*
 *  Spell vs. Speak rules table.
 *  Generated from : spel_uk.tab
 *  Written to file : t.c
 *  Created on : 10/02/97 at 13:33:10
 */
const unsigned char spell_it[26][26] = {
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,
     0x02,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,
     0x03,  0x00,  0x02,  0x03,  0x00,  0x03,  0x03,  0x00,  0x03,
     0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,  0x00,  0x03,
     0x03,  0x03,  0x00,  0x03,  0x03,  0x01,  0x00,  0x03,  0x03,
     0x00,  0x03,  0x02,  0x00,  0x03,  0x03,  0x00,  0x02,  0x03,
     0x00,  0x03,  0x03,  0x03,  0x00,  0x01,  0x00,  0x03,  0x03,
     0x02,  0x00,  0x03,  0x03,  0x01,  0x00,  0x03,  0x03,  0x02,
     0x03,  0x02,  0x00,  0x03,  0x03,  0x00,  0x03,  0x03,  0x00,
     0x03,  0x00,  0x03,  0x00,  0x03,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x03,  0x03,  0x03,  0x00,
     0x02,  0x03,  0x03,  0x00,  0x01,  0x03,  0x00,  0x03,  0x02,
     0x00,  0x03,  0x03,  0x00,  0x03,  0x03,  0x00,  0x03,  0x03,
     0x03,  0x00,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,
     0x02,  0x01,  0x00,  0x03,  0x03,  0x01,  0x03,  0x00,  0x00,
     0x03,  0x03,  0x00,  0x03,  0x03,  0x00,  0x03,  0x01,  0x03,
     0x00,  0x03,  0x00,  0x02,  0x02,  0x03,  0x00,  0x03,  0x02,
     0x03,  0x00,  0x03,  0x02,  0x02,  0x03,  0x03,  0x00,  0x02,
     0x03,  0x03,  0x02,  0x02,  0x00,  0x03,  0x03,  0x03,  0x00,
     0x03,  0x00,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,
     0x03,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x03,  0x00,
     0x00,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,
     0x02,  0x03,  0x02,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,
     0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,  0x00,
     0x03,  0x02,  0x03,  0x00,  0x02,  0x03,  0x01,  0x00,  0x03,
     0x03,  0x00,  0x03,  0x00,  0x00,  0x03,  0x03,  0x00,  0x02,
     0x03,  0x00,  0x03,  0x00,  0x03,  0x00,  0x03,  0x00,  0x03,
     0x03,  0x03,  0x00,  0x03,  0x03,  0x02,  0x00,  0x03,  0x03,
     0x00,  0x03,  0x03,  0x00,  0x03,  0x03,  0x02,  0x03,  0x03,
     0x00,  0x03,  0x02,  0x03,  0x00,  0x03,  0x00,  0x03,  0x01,
     0x03,  0x00,  0x03,  0x02,  0x02,  0x00,  0x03,  0x03,  0x02,
     0x02,  0x01,  0x00,  0x03,  0x03,  0x02,  0x02,  0x03,  0x00,
     0x03,  0x03,  0x03,  0x00,  0x03,  0x00,  0x03,  0x03,  0x03,
     0x00,  0x03,  0x02,  0x02,  0x00,  0x03,  0x03,  0x02,  0x02,
     0x02,  0x00,  0x03,  0x03,  0x02,  0x03,  0x03,  0x00,  0x03,
     0x02,  0x03,  0x00,  0x03,  0x00,  0x00,  0x00,  0x00,  0x02,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x01,  0x00,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,
     0x03,  0x01,  0x00,  0x03,  0x03,  0x00,  0x02,  0x00,  0x00,
     0x02,  0x03,  0x00,  0x02,  0x01,  0x00,  0x03,  0x03,  0x03,
     0x00,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,
     0x03,  0x00,  0x03,  0x03,  0x03,  0x03,  0x03,  0x00,  0x03,
     0x03,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,
     0x03,  0x00,  0x03,  0x03,  0x02,  0x00,  0x03,  0x03,  0x01,
     0x00,  0x03,  0x03,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,
     0x00,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,
     0x00,  0x02,  0x00,  0x02,  0x00,  0x02,  0x02,  0x00,  0x00,
     0x02,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x03,  0x02,
     0x02,  0x00,  0x00,  0x00,  0x00,  0x03,  0x00,  0x03,  0x00,
     0x02,  0x02,  0x03,  0x00,  0x02,  0x03,  0x01,  0x00,  0x03,
     0x03,  0x02,  0x00,  0x02,  0x00,  0x02,  0x03,  0x00,  0x00,
     0x02,  0x00,  0x03,  0x00,  0x02,  0x00,  0x03,  0x02,  0x00,
     0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x03,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x03,  0x03,
     0x03,  0x00,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,  0x03,
     0x03,  0x03,  0x00,  0x03,  0x03,  0x03,  0x03,  0x03,  0x00,
     0x03,  0x03,  0x03,  0x00,  0x03,  0x00,  0x03,  0x03,  0x02,
     0x00,  0x03,  0x03,  0x01,  0x00,  0x03,  0x03,  0x03,  0x03,
     0x03,  0x00,  0x03,  0x03,  0x00,  0x03,  0x03,  0x00,  0x03,
     0x03,  0x03,  0x00,  0x03,  0x00,  0x03,  0x03,  0x03,  0x00,
     0x03,  0x03,  0x03,  0x00,  0x03,  0x03,  0x02,  0x03,  0x02,
     0x00,  0x03,  0x03,  0x03,  0x03,  0x03,  0x00,  0x03,  0x03,
     0x03,  0x00,  0x03,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
     0x01,  0x00,  0x00,  0x03,  0x03,  0x02,  0x00,  0x03,  0x03,
     0x01,  0x00,  0x03,  0x03,  0x03,  0x03,  0x02,  0x00,  0x03,
     0x03,  0x03,  0x03,  0x03,  0x00,  0x03,  0x01,  0x03,  0x00,
     0x02 };
                               
